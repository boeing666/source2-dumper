#pragma once

class CNPC_SinnersSacrifice_GraphController : public CNPC_TrooperNeutral_GraphController /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x450]; // offset 0x0
    CAnimGraphParamRef< CGlobalSymbol > m_eOrbDrop; // offset 0x450, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bLightMelee; // offset 0x480, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bHeavyMelee; // offset 0x4A8, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bDead; // offset 0x4D0, size 0x28, align 8
};
