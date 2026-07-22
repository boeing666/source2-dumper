#pragma once

class CModifierStormCloudVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // offset 0x9F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // offset 0xAD0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // offset 0xBB0, size 0xE0, align 8
    CSoundEventName m_strChannelEndingSoonSound; // offset 0xC90, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishedSound; // offset 0xCA0, size 0x10, align 8
    CSoundEventName m_strDamageRecievedSound; // offset 0xCB0, size 0x10, align 8
    CSoundEventName m_strAmbientZapSound; // offset 0xCC0, size 0x10, align 8
};
