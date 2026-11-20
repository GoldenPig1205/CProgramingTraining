Score plus_(Score a, Score b) {
    Score result;
    result.name = "Total";
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;
    return result;
}
