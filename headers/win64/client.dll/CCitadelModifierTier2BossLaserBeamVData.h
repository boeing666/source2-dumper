#pragma once

class CCitadelModifierTier2BossLaserBeamVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bIsSideHead; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flSideSearchRadius; // offset 0x794, size 0x4, align 4
    float32 m_flSideSearchAngle; // offset 0x798, size 0x4, align 4
    float32 m_flMinShootTime; // offset 0x79C, size 0x4, align 4
    CUtlString m_strBeamStartAttachmentPoint; // offset 0x7A0, size 0x8, align 8 | MPropertyGroupName
    CUtlString m_strBeamStartAttachmentPoint02; // offset 0x7A8, size 0x8, align 8
    CUtlString m_strBeamStartSearchPos; // offset 0x7B0, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // offset 0x7B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // offset 0x898, size 0xE0, align 8
    CSoundEventName m_BeamClosestPointLoopSound; // offset 0x978, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamFireSound; // offset 0x988, size 0x10, align 8
};
