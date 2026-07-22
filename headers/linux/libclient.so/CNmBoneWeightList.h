#pragma once

class CNmBoneWeightList  // sizeof 0x110, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
public:
    CResourceName m_skeletonName; // offset 0x0, size 0xE0, align 8
    CUtlVector< CGlobalSymbol > m_boneIDs; // offset 0xE0, size 0x18, align 8
    CUtlVector< float32 > m_weights; // offset 0xF8, size 0x18, align 8
};
