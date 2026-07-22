#pragma once

class CTestPulseIO : public CLogicalEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnVariantVoid; // offset 0x4A8, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnVariantBool; // offset 0x4C0, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnVariantInt; // offset 0x4E0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnVariantFloat; // offset 0x500, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnVariantString; // offset 0x520, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnVariantColor; // offset 0x540, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnVariantVector; // offset 0x560, size 0x28, align 8
    bool m_bAllowEmptyInputs; // offset 0x588, size 0x1, align 1
    char _pad_0589[0x7]; // offset 0x589
    CTestPulseIOComponent_Derived m_TestComponent; // offset 0x590, size 0x30, align 8
    CEntityIOOutput m_OnInternalTestVoid; // offset 0x5C0, size 0x18, align 255
    CEntityOutputTemplate< bool > m_OnInternalTestBool; // offset 0x5D8, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnInternalTestInt; // offset 0x5F8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnInternalTestFloat; // offset 0x618, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnInternalTestString; // offset 0x638, size 0x20, align 8
    CEntityOutputTemplate< Color > m_OnInternalTestColor; // offset 0x658, size 0x20, align 8
    CEntityOutputTemplate< Vector > m_OnInternalTestVector; // offset 0x678, size 0x28, align 8
    CEntityOutputTemplate< CEntityNameString > m_OnInternalTestEntityName; // offset 0x6A0, size 0x20, align 8
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnInternalTestEntityHandle; // offset 0x6C0, size 0x20, align 8
    CEntityOutputTemplate< TestInputOutputCombinationsEnum_t > m_OnInternalTestSchemaEnum; // offset 0x6E0, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::FloatStringArgs_t > m_OnInternalTestFloatString; // offset 0x700, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityNameStringArgs_t > m_OnInternalTestEntityNameString; // offset 0x728, size 0x28, align 8
    CEntityOutputTemplate< CTestPulseIO::EntityHandleIntArgs_t > m_OnInternalTestEntityHandleInt; // offset 0x750, size 0x20, align 8
    CEntityOutputTemplate< CTestPulseIO::ThreeStringArgs_t > m_OnInternalTestStringStringString; // offset 0x770, size 0x30, align 8
};
