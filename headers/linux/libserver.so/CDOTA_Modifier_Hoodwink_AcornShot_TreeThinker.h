#pragma once

class CDOTA_Modifier_Hoodwink_AcornShot_TreeThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CDOTA_TempTree > m_hTree; // offset 0x1AA8, size 0x4, align 4
    int32 fow_viewer; // offset 0x1AAC, size 0x4, align 4
    int32 fow_team; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
