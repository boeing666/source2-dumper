#pragma once

class CDOTA_Unit_Hero_FacelessVoid : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x20B0]; // offset 0x0
    VectorWS m_vecStanceDestinationPoint; // offset 0x20B0, size 0xC, align 4
    char _pad_20BC[0x4]; // offset 0x20BC
};
