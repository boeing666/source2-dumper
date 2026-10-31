#pragma once

class CNPC_Trooper_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x5E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x4F0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction; // offset 0x4F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTrooperAction; // offset 0x508, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_ePivot; // offset 0x520, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimPitch; // offset 0x538, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flAimYaw; // offset 0x550, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flRunSpeed; // offset 0x568, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bAttack; // offset 0x580, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bInAirForced; // offset 0x598, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bJumped; // offset 0x5B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bLanded; // offset 0x5C8, size 0x18, align 8
};
