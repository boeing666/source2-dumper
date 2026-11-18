#pragma once

class CDOTA_Unit_Hero_PhantomLancer : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x20B0]; // offset 0x0
    bool m_bInventoryEnabled; // offset 0x20B0, size 0x1, align 1
    char _pad_20B1[0x7]; // offset 0x20B1
};
