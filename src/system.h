/*
	Copyright (C) 2020 daltomi <daltomi@disroot.org>

	This file is part of xsv.

	xsv is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	xsv is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with xsv.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SYSTEM_H_INCLUDE
#define SYSTEM_H_INCLUDE

void System(char const* const exec, char* const* argv);
FILE* PipeOpen(char const* const cmd, char const* const type);
void PipeClose(FILE* pipe);

#endif
