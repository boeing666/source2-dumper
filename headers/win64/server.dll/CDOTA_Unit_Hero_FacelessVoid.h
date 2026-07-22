#pragma once

class CDOTA_Unit_Hero_FacelessVoid : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    VectorWS m_vecStanceDestinationPoint; // offset 0x1F00, size 0xC, align 4
    char _pad_1F0C[0x4]; // offset 0x1F0C
};
