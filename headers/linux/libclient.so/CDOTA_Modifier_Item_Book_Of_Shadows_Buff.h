#pragma once

class CDOTA_Modifier_Item_Book_Of_Shadows_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bUntargetableAllies; // offset 0x1A58, size 0x1, align 1
    bool m_bUntargetableEnemies; // offset 0x1A59, size 0x1, align 1
    char _pad_1A5A[0x6]; // offset 0x1A5A
};
