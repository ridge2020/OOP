var gulp = require('gulp');
var exec = require('child_process').exec;
var buildCommand = "clear;g++ *.cpp -o ./a.out;./a.out";

gulp.task('build',function(){
exec(buildCommand, function (error, stdout, stderr) {
console.log(stdout);
console.log(stderr);
});
});

gulp.task('watch', function() {
gulp.watch('*.cpp', ['build']);
gulp.watch('*.h', ['build']);
});

gulp.task('default',['build','watch'],function(){});