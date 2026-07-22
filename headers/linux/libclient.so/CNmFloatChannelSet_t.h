#pragma once

struct CNmFloatChannelSet_t  // sizeof 0x18, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CUtlLeanVector< CGlobalSymbol > m_channelIDs; // offset 0x8, size 0x10, align 8
};
