#pragma once

class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x500]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_flRandomSeed; // offset 0x500, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flTimeScale; // offset 0x518, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flHealthPct; // offset 0x530, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bHasTarget; // offset 0x548, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bInAir; // offset 0x560, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeed; // offset 0x578, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flForwardSpeed; // offset 0x590, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flStrafeSpeed; // offset 0x5A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flVerticalSpeed; // offset 0x5C0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookHeading; // offset 0x5D8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flLookPitch; // offset 0x5F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget; // offset 0x608, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bMeleeAttack; // offset 0x620, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bRangedAttack; // offset 0x638, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bKill; // offset 0x650, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eFlinch; // offset 0x668, size 0x18, align 8
    CAnimGraphParamRef< int32 > m_nHitLayerTrigger; // offset 0x680, size 0x28, align 8
    CAnimGraphParamRef< char* > m_pszDamageState; // offset 0x6A8, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_flHealth; // offset 0x6D8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flTimeScale1; // offset 0x700, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bBeam; // offset 0x728, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bCrouching; // offset 0x750, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bInAir1; // offset 0x778, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bHasTarget1; // offset 0x7A0, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bReloading; // offset 0x7C8, size 0x28, align 8
};
