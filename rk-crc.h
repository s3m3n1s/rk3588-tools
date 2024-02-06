/* Copyright 2024 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef RK_CRC_H
#define RK_CRC_H

#include <stddef.h>
#include <stdint.h>

void Crc32Init(void);
uint32_t Crc32(uint32_t c, const void *pBuffer, size_t Length);

void Crc16Init(void);
uint16_t Crc16(uint16_t c, const void *pBuffer, size_t Length);

#endif

