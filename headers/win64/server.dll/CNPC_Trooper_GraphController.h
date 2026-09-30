#pragma once

class CNPC_Trooper_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x478, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x388]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction; // offset 0x388, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTrooperAction; // offset 0x3A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_ePivot; // offset 0x3B8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimPitch; // offset 0x3D0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimYaw; // offset 0x3E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flRunSpeed; // offset 0x400, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bAttack; // offset 0x418, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bInAirForced; // offset 0x430, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bJumped; // offset 0x448, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bLanded; // offset 0x460, size 0x18, align 8
};
