#pragma once

class C_DOTA_Unit_Hero_Muerta : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x209C]; // offset 0x0
    CHandle< C_BaseEntity > m_hDoubleShotTarget; // offset 0x209C, size 0x4, align 4
    QAngle m_qStartAngle; // offset 0x20A0, size 0xC, align 4
    char _pad_20AC[0x4]; // offset 0x20AC
};
