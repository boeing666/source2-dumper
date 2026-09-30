#pragma once

class CCitadel_Modifier_T3BossWaveBeamPreviewVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlString m_strBeamStartAttachmentPoint_L; // offset 0x760, size 0x8, align 8 | MPropertyGroupName
    CUtlString m_strBeamStartAttachmentPoint_R; // offset 0x768, size 0x8, align 8
    float32 m_flShrineChargeOffset; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberBeamPreviewEffect; // offset 0x778, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphBeamPreviewEffect; // offset 0x858, size 0xE0, align 8
};
