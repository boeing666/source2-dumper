#pragma once

class C_DOTA_Unit_Hero_Muerta : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    CHandle< C_BaseEntity > m_hDoubleShotTarget; // offset 0x1D80, size 0x4, align 4
    QAngle m_qStartAngle; // offset 0x1D84, size 0xC, align 4
};
