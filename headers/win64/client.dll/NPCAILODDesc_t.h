#pragma once

struct NPCAILODDesc_t  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 m_nMaxNPCs; // offset 0x0, size 0x4, align 4
    float32 m_flMinRange; // offset 0x4, size 0x4, align 4
    float32 m_flOffNavLastKnownAreaUpdateInterval; // offset 0x8, size 0x4, align 4
    bool m_bSensing; // offset 0xC, size 0x1, align 1
    bool m_bSensingUseExactEyePosition; // offset 0xD, size 0x1, align 1
    bool m_bDecisionMaking; // offset 0xE, size 0x1, align 1
    bool m_bUseLocalNavigator; // offset 0xF, size 0x1, align 1
    bool m_bUseAdvancedLocomotion; // offset 0x10, size 0x1, align 1
    bool m_bEnableFootSweeps; // offset 0x11, size 0x1, align 1
    bool m_bDetailedLookTargets; // offset 0x12, size 0x1, align 1
    bool m_bShouldPlayFootstepSounds; // offset 0x13, size 0x1, align 1
    bool m_bRagdollEnabled; // offset 0x14, size 0x1, align 1
    bool m_bEnableFlinching; // offset 0x15, size 0x1, align 1
    bool m_bEnableWarnNPCsOfIncomingFire; // offset 0x16, size 0x1, align 1
    bool m_bEnableBlinking; // offset 0x17, size 0x1, align 1
};
