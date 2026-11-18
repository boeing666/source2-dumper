#pragma once

struct TaggedSoundSettings_t  // sizeof 0x18, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults MPropertyFriendlyName}
{
    CUtlVector< CStrongHandle< InfoForResourceTypeCVDataResource > > m_taggedSounds; // offset 0x0, size 0x18, align 8
};
