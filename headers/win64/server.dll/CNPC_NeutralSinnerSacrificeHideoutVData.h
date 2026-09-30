#pragma once

class CNPC_NeutralSinnerSacrificeHideoutVData : public CNPC_NeutralSinnerSacrificeVData /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CUtlString m_sLocHint01; // offset 0x1190, size 0x8, align 8
    CUtlString m_sLocHint02; // offset 0x1198, size 0x8, align 8
    float32 m_flRespawnTime; // offset 0x11A0, size 0x4, align 4
    char _pad_11A4[0x4]; // offset 0x11A4
};
