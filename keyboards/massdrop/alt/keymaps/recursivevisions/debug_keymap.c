/* Copyright 2026 "RecursiveVisions" (@RecursiveVisions)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* ========================================================================== */
/*                               DEBUG FUNCTIONS                              */
/* ========================================================================== */

// reperesent uint8_t as a binary string
char *uint8_t_to_binary_str(uint8_t n) {
    int num_bits = sizeof(uint8_t) * 8;
    char *ret = malloc(num_bits + 1);

    for (int i = num_bits - 1; i >= 0; i--) {
        ret[i] = (n & 1) + '0';
        n >>= 1;
    }

    ret[num_bits] = '\0';
    return ret;
}

// reperesent uint16_t as a binary string
char *uint16_t_to_binary_str(uint16_t n) {
    int num_bits = sizeof(uint16_t) * 8;
    char *ret = malloc(num_bits + 1);

    for (int i = num_bits - 1; i >= 0; i--) {
        ret[i] = (n & 1) + '0';
        n >>= 1;
    }

    ret[num_bits] = '\0';
    return ret;
}
