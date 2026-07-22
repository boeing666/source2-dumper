#pragma once

class CCitadelModifierTier2BossLaserBeamVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    bool m_bIsSideHead; // offset 0x750, size 0x1, align 1
    char _pad_0751[0x3]; // offset 0x751
    float32 m_flSideSearchRadius; // offset 0x754, size 0x4, align 4
    float32 m_flSideSearchAngle; // offset 0x758, size 0x4, align 4
    float32 m_flMinShootTime; // offset 0x75C, size 0x4, align 4
    CUtlString m_strBeamStartAttachmentPoint; // offset 0x760, size 0x8, align 8 | MPropertyGroupName
    CUtlString m_strBeamStartAttachmentPoint02; // offset 0x768, size 0x8, align 8
    CUtlString m_strBeamStartSearchPos; // offset 0x770, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // offset 0x778, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // offset 0x858, size 0xE0, align 8
    CSoundEventName m_BeamLoopSound; // offset 0x938, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamFireSound; // offset 0x948, size 0x10, align 8
};
