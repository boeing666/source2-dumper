#pragma once

class CNPC_SinnersSacrifice_GraphController : public CNPC_TrooperNeutral_GraphController /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x5B8]; // offset 0x0
    CAnimGraphParamRef< CGlobalSymbol > m_eOrbDrop; // offset 0x5B8, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bLightMelee; // offset 0x5E8, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bHeavyMelee; // offset 0x610, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bDead; // offset 0x638, size 0x28, align 8
};
