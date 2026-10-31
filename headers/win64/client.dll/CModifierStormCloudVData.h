#pragma once

class CModifierStormCloudVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // offset 0xA38, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // offset 0xB18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // offset 0xBF8, size 0xE0, align 8
    CSoundEventName m_strChannelEndingSoonSound; // offset 0xCD8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishedSound; // offset 0xCE8, size 0x10, align 8
    CSoundEventName m_strDamageRecievedSound; // offset 0xCF8, size 0x10, align 8
    CSoundEventName m_strAmbientZapSound; // offset 0xD08, size 0x10, align 8
};
