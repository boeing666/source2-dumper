#pragma once

class CCitadel_Modifier_CounterspellWatcherVData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryFXOverride; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealFX; // offset 0x840, size 0xE0, align 8
    CSoundEventName m_strSuccessProcSound; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
};
