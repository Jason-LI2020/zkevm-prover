/* code generated with arith_eq_gen.js
* equation: x1*x2-y1*y2-x3+p*q1-p*offset
* 
* p=0x1a0111ea397fe69a4b1ba7b6434bacd764774b84f38512bf6730d2a0f6b0f6241eabfffeb153ffffb9feffffffffaaab
* offset=0x10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
*/

#include <stdint.h>
#include "definitions.hpp"
#include "sm/pols_generated/commit_pols.hpp"
#include "goldilocks_base_field.hpp"

USING_PROVER_FORK_NAMESPACE;

int64_t eq13 (Goldilocks &fr, ArithCommitPols &p, uint64_t step, uint64_t _o)
{
	switch(step) {
		case 0: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[0][_o]));

		case 1: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[1][_o]));

		case 2: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[2][_o]));

		case 3: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[3][_o]));

		case 4: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[4][_o]));

		case 5: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[5][_o]));

		case 6: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[6][_o]));

		case 7: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[7][_o]));

		case 8: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[8][_o]));

		case 9: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[9][_o]));

		case 10: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[10][_o]));

		case 11: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[11][_o]));

		case 12: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[12][_o]));

		case 13: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[13][_o]));

		case 14: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[14][_o]));

		case 15: 
		return (
		((int64_t)fr.toU64(p.x1[0][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[0][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xffaaab * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[1][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[0][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[0][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[0][_o]))
		 - (int64_t)fr.toU64(p.x3[15][_o]));

		case 16: 
		return (
		((int64_t)fr.toU64(p.x1[1][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[1][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xffffff * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[2][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[1][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[1][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[1][_o]))
		    - 0xffaaab0);

		case 17: 
		return (
		((int64_t)fr.toU64(p.x1[2][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[2][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xffb9fe * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[3][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[2][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[2][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[2][_o]))
		    - 0xffffff0);

		case 18: 
		return (
		((int64_t)fr.toU64(p.x1[3][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[3][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xb153ff * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[4][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[3][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[3][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[3][_o]))
		    - 0xffb9fe0);

		case 19: 
		return (
		((int64_t)fr.toU64(p.x1[4][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[4][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xabfffe * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[5][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[4][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[4][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[4][_o]))
		    - 0xb153ff0);

		case 20: 
		return (
		((int64_t)fr.toU64(p.x1[5][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[5][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xf6241e * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[6][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[5][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[5][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[5][_o]))
		    - 0xabfffe0);

		case 21: 
		return (
		((int64_t)fr.toU64(p.x1[6][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[6][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xa0f6b0 * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[7][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[6][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[6][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[6][_o]))
		    - 0xf6241e0);

		case 22: 
		return (
		((int64_t)fr.toU64(p.x1[7][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[7][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0x6730d2 * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[8][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[7][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[7][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[7][_o]))
		    - 0xa0f6b00);

		case 23: 
		return (
		((int64_t)fr.toU64(p.x1[8][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[8][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0x8512bf * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[9][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[8][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[8][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[8][_o]))
		    - 0x6730d20);

		case 24: 
		return (
		((int64_t)fr.toU64(p.x1[9][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[9][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0x4b84f3 * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[10][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[9][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[9][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[9][_o]))
		    - 0x8512bf0);

		case 25: 
		return (
		((int64_t)fr.toU64(p.x1[10][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[10][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xd76477 * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[11][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[10][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[10][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[10][_o]))
		    - 0x4b84f30);

		case 26: 
		return (
		((int64_t)fr.toU64(p.x1[11][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[11][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0x434bac * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[12][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[11][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[11][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[11][_o]))
		    - 0xd764770);

		case 27: 
		return (
		((int64_t)fr.toU64(p.x1[12][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[12][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0x1ba7b6 * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[13][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[12][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[12][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[12][_o]))
		    - 0x434bac0);

		case 28: 
		return (
		((int64_t)fr.toU64(p.x1[13][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[13][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xe69a4b * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[14][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[13][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[13][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[13][_o]))
		    - 0x1ba7b60);

		case 29: 
		return (
		((int64_t)fr.toU64(p.x1[14][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[14][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0xea397f * (int64_t)fr.toU64(p.q1[15][_o])) +
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[14][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[14][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[14][_o]))
		    - 0xe69a4b0);

		case 30: 
		return (
		((int64_t)fr.toU64(p.x1[15][_o]) * (int64_t)fr.toU64(p.x2[15][_o]) - (int64_t)fr.toU64(p.y1[15][_o]) * (int64_t)fr.toU64(p.y2[15][_o]) + 0x1a0111 * (int64_t)fr.toU64(p.q1[15][_o]))
		    - 0xea397f0);

		case 31: 
		return ( - 0x1a01110);
	}
	return 0;
}