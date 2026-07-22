#pragma once

struct CCitadelTaggedSound_t  // sizeof 0x18, align 0x8 (client) {MVDataOverlayType MGetKV3ClassDefaults}
{
    CSoundEventName m_soundEvent; // offset 0x0, size 0x10, align 8 | MPropertyStartGroup
    CUtlString m_tags; // offset 0x10, size 0x8, align 8
};
