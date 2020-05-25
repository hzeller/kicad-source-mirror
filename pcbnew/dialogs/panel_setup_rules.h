/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2020 KiCad Developers, see AUTHORS.txt for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */


#ifndef PANEL_SETUP_RULES_H
#define PANEL_SETUP_RULES_H

#include <panel_setup_rules_base.h>

class DRC;
class PAGED_DIALOG;
class PCB_EDIT_FRAME;


class PANEL_SETUP_RULES : public PANEL_SETUP_RULES_BASE
{
private:
    PCB_EDIT_FRAME* m_frame;
    int             m_lastCaretPos;

public:
    PANEL_SETUP_RULES( PAGED_DIALOG* aParent, PCB_EDIT_FRAME* aFrame );
    ~PANEL_SETUP_RULES( ) override { };

private:
    void onScintillaCharAdded( wxStyledTextEvent &aEvent );
    void onScintillaUpdateUI( wxStyledTextEvent& aEvent );

    void OnSyntaxHelp( wxHyperlinkEvent& aEvent ) override;

    bool TransferDataToWindow() override;
    bool TransferDataFromWindow() override;
};

#endif //PANEL_SETUP_RULES_H
