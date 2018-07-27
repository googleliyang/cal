//For big int > 2^23 http://reallifejs.com/the-meat/calculators/big-number-calculator/
var readline = require('readline');

var  rl = readline.createInterface({
	input:process.stdin,
	output:process.stdout
});

rl.question("计算的数字",function(answer){
let j = 0
	let t = new Date().getTime()
	for (let i = 0; i <= answer; i ++) {
		j += i
	}
	let t_end = new Date().getTime() - t
	console.log(`结果为${j}`)
	console.log(`耗时为${t_end}ms`)
	rl.close();
});
