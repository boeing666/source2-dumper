#pragma once

class CCitadel_Modifier_T3BossWaveBeamPreviewVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlString m_strBeamStartAttachmentPoint_L; // offset 0x790, size 0x8, align 8 | MPropertyGroupName
    CUtlString m_strBeamStartAttachmentPoint_R; // offset 0x798, size 0x8, align 8
    float32 m_flShrineChargeOffset; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberBeamPreviewEffect; // offset 0x7A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphBeamPreviewEffect; // offset 0x888, size 0xE0, align 8
};
