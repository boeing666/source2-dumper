#pragma once

struct TeleporterParams_t  // sizeof 0x1F0, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StartEffect; // offset 0x0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndEffect; // offset 0xE0, size 0xE0, align 8
    CSoundEventName m_strEnterSound; // offset 0x1C0, size 0x10, align 8
    CSoundEventName m_strStartSound; // offset 0x1D0, size 0x10, align 8
    CSoundEventName m_strTeleportedSound; // offset 0x1E0, size 0x10, align 8
};
