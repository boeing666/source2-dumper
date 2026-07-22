#pragma once

class CCitadelModifierTier2BossLaserChargeVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CUtlVector< CUtlString > m_strAttachmentPoints; // offset 0x750, size 0x18, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // offset 0x768, size 0xE0, align 8
};
