#pragma once

class CNmFloatChannelData  // sizeof 0x58, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
public:
    CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // offset 0x0, size 0x8, align 8
    CGlobalSymbol m_setID; // offset 0x8, size 0x8, align 8
    CUtlVector< CNmFloatChannelData::ChannelSettings_t > m_channelSettings; // offset 0x10, size 0x18, align 8
    CUtlVector< uint16 > m_compressedData; // offset 0x28, size 0x18, align 8
    CUtlVector< uint32 > m_compressedOffsets; // offset 0x40, size 0x18, align 8
};
