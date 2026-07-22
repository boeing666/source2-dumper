#pragma once

class CNPC_NeutralSinnerSacrificeHideoutVData : public CNPC_NeutralSinnerSacrificeVData /*0x0*/  // sizeof 0x1908, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18F0]; // offset 0x0
    CUtlString m_sLocHint01; // offset 0x18F0, size 0x8, align 8
    CUtlString m_sLocHint02; // offset 0x18F8, size 0x8, align 8
    float32 m_flRespawnTime; // offset 0x1900, size 0x4, align 4
    char _pad_1904[0x4]; // offset 0x1904
};
