/*
 * WriteThruShell.cc
 *
 * Simple scheme shell
 * Copyright (c) 2008 Linas Vepstas <linas@linas.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <opencog/atomspace/AtomSpace.h>
#include <opencog/cogserver/server/CogServer.h>

#include "WriteThruEval.h"
#include "WriteThruShell.h"

using namespace opencog;

WriteThruShell::WriteThruShell(void)
{
	normal_prompt = "";
	abort_prompt = "";
	pending_prompt = "";

	show_prompt = false;
	_name = "sexp";
}

WriteThruShell::~WriteThruShell()
{
}

GenericEval* WriteThruShell::get_evaluator(void)
{
	return WriteThruEval::get_evaluator(&cogserver().getAtomSpace());
}

/* ===================== END OF FILE ============================ */
