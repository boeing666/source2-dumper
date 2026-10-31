#pragma once

class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2E8]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_flRandomSeed; // offset 0x2E8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flTimeScale; // offset 0x300, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flHealthPct; // offset 0x318, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bHasTarget; // offset 0x330, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bInAir; // offset 0x348, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eMovementBlockedID; // offset 0x360, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eHitReactID; // offset 0x378, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flHitReactDuration; // offset 0x390, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeed; // offset 0x3A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flForwardSpeed; // offset 0x3C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flStrafeSpeed; // offset 0x3D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flVerticalSpeed; // offset 0x3F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookHeading; // offset 0x408, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookPitch; // offset 0x420, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget; // offset 0x438, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bMeleeAttack; // offset 0x450, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bRangedAttack; // offset 0x468, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bKill; // offset 0x480, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eFlinch; // offset 0x498, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTurn; // offset 0x4B0, size 0x18, align 8
    char _pad_04C8[0x28]; // offset 0x4C8
};
