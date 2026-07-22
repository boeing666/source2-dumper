#pragma once

class CCompressorGroup  // sizeof 0x1A0, align 0xFF (animationsystem)
{
public:
    int32 m_nTotalElementCount; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< char* > m_szChannelClass; // offset 0x8, size 0x18, align 8
    CUtlVector< char* > m_szVariableName; // offset 0x20, size 0x18, align 8
    CUtlVector< fieldtype_t > m_nType; // offset 0x38, size 0x18, align 8
    CUtlVector< int32 > m_nFlags; // offset 0x50, size 0x18, align 8
    CUtlVector< CUtlString > m_szGrouping; // offset 0x68, size 0x18, align 8
    CUtlVector< int32 > m_nCompressorIndex; // offset 0x80, size 0x18, align 8
    CUtlVector< CUtlVector< char* > > m_szElementNames; // offset 0x98, size 0x18, align 8
    CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // offset 0xB0, size 0x18, align 8
    CUtlVector< uint32 > m_nElementMask; // offset 0xC8, size 0x18, align 8
    char _pad_00E0[0x18]; // offset 0xE0
    CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // offset 0xF8, size 0x18, align 8
    CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor; // offset 0x110, size 0x18, align 8
    CUtlVector< CCompressor< int32 >* > m_intCompressor; // offset 0x128, size 0x18, align 8
    CUtlVector< CCompressor< bool >* > m_boolCompressor; // offset 0x140, size 0x18, align 8
    CUtlVector< CCompressor< Color >* > m_colorCompressor; // offset 0x158, size 0x18, align 8
    CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // offset 0x170, size 0x18, align 8
    CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // offset 0x188, size 0x18, align 8
};
