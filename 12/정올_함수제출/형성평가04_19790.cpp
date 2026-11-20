Body makeStudent(Body father, Body mother) {
    Body student;
    student.height = (father.height + mother.height) / 2 + 5;
    student.weight = (father.weight + mother.weight) / 2 - 4.5;
    return student;
}
