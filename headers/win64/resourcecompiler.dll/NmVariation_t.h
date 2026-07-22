#pragma once

struct NmVariation_t  // sizeof 0xF8, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CGlobalSymbol m_parentID; // offset 0x8, size 0x8, align 8
    CResourceName m_skeleton; // offset 0x10, size 0xE0, align 8
    CNmGraphVariationUserData* m_pUserData; // offset 0xF0, size 0x8, align 8
};
