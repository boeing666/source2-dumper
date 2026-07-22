#pragma once

class C_DOTA_Unit_Underlord_Portal : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    CHandle< C_BaseEntity > m_hOtherPortal; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x4]; // offset 0x1A24
};
