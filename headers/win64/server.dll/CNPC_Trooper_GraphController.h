#pragma once

class CNPC_Trooper_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_flVariant; // offset 0x7F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bExplosionReact; // offset 0x808, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bMedicHeal; // offset 0x820, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flExplosionReactRandomTimeScale; // offset 0x838, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTurn; // offset 0x850, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction; // offset 0x868, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bZiplining; // offset 0x880, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bFalling; // offset 0x898, size 0x18, align 8
    bool m_bShouldReset; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x7]; // offset 0x8B1
};
