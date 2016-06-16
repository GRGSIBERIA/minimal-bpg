#pragma once
/*
簡単に誤差伝搬法を運用したい

入力データ
目標データ
評価関数
誤差評価
イテレーション

入力データを決める
関数を実行する
出力データと目標データからコストを算出する
誤差評価関数でコストが閾値以下か評価する
誤差評価をパスしない場合はイテレーション

//////////////////////////////////////////////////
*top
var input = gets
var goal = gets
var output = function(input)

var cost = cost_eval(output, goal)

if error_eval(cost) > threshold:
	increment(input)
	goto *top

return output

//////////////////////////////////////////////////

input = gets
goal = gets

output = MiniBPG(input, goal, cost_eval, error_eval, increment_funcs, threshold_func, max_iteration)
*/

namespace minibpg 
{
	class MiniBPG
	{

	};
}