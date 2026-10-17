#pragma once

class CDOTA_Modifier_Item_Book_Of_Shadows_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bUntargetableAllies; // offset 0x1AA8, size 0x1, align 1
    bool m_bUntargetableEnemies; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x6]; // offset 0x1AAA
};
