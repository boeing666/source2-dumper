#pragma once

class CImageProcessor  // sizeof 0x20, align 0x8 (texturelib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_algorithm; // offset 0x0, size 0x8, align 8
    CUtlString m_stringArg; // offset 0x8, size 0x8, align 8
    Vector4D m_vFloat4Arg; // offset 0x10, size 0x10, align 4
};
