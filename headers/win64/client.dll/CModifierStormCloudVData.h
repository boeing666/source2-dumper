#pragma once

class CModifierStormCloudVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // offset 0xA30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // offset 0xB10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // offset 0xBF0, size 0xE0, align 8
    CSoundEventName m_strChannelEndingSoonSound; // offset 0xCD0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishedSound; // offset 0xCE0, size 0x10, align 8
    CSoundEventName m_strDamageRecievedSound; // offset 0xCF0, size 0x10, align 8
    CSoundEventName m_strAmbientZapSound; // offset 0xD00, size 0x10, align 8
};
