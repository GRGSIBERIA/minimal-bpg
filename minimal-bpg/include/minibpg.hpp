#pragma once
/*
�ȒP�Ɍ덷�`���@���^�p������

���̓f�[�^
�ڕW�f�[�^
�]���֐�
�덷�]��
�C�e���[�V����

���̓f�[�^�����߂�
�֐������s����
�o�̓f�[�^�ƖڕW�f�[�^����R�X�g���Z�o����
�덷�]���֐��ŃR�X�g��臒l�ȉ����]������
�덷�]�����p�X���Ȃ��ꍇ�̓C�e���[�V����

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