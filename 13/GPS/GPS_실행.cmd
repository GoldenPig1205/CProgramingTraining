@python -x "%~f0" && exit /b 0 || (pause & exit /b 1)
from functools import partial
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from subprocess import CalledProcessError, run
from tempfile import TemporaryDirectory
from threading import Thread
import sys
import webbrowser


def main():
    folder = Path(__file__).resolve().parent

    with TemporaryDirectory(prefix="gps-build-") as temp:
        exe = Path(temp) / "geo2json.exe"
        print("Compiling geo2json.c...", flush=True)
        run(["gcc", "-std=c11", "geo2json.c", "-o", str(exe)], cwd=folder, check=True)
        run([str(exe)], cwd=folder, check=True)

    handler = partial(SimpleHTTPRequestHandler, directory=folder)
    with ThreadingHTTPServer(("127.0.0.1", 0), handler) as server:
        url = f"http://127.0.0.1:{server.server_port}/index.html"
        print(f"GPS map: {url}", flush=True)
        print("Keep this window open while viewing the map. Press Ctrl+C to stop.", flush=True)
        Thread(target=webbrowser.open, args=(url,), daemon=True).start()
        server.serve_forever()


if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        pass
    except (OSError, CalledProcessError) as error:
        print(f"Could not start the GPS demo: {error}", file=sys.stderr)
        sys.exit(1)
