#pragma once

class CAnimGraphNetworkedVariables  // sizeof 0x208, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // offset 0x8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // offset 0x20, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // offset 0x38, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< int32 > m_PredNetIntVariables; // offset 0x50, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // offset 0x68, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // offset 0x80, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // offset 0x98, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // offset 0xB0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // offset 0xC8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables; // offset 0xE0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // offset 0xF8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // offset 0x110, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // offset 0x128, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // offset 0x140, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // offset 0x158, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // offset 0x170, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // offset 0x188, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // offset 0x1A0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // offset 0x1B8, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    CNetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables; // offset 0x1D0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkSendProxyRecipientsFilter MNetworkChangeCallback MNetworkAlias
    int32 m_nBoolVariablesCount; // offset 0x1E8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nOwnerOnlyBoolVariablesCount; // offset 0x1EC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nRandomSeedOffset; // offset 0x1F0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flLastTeleportTime; // offset 0x1F4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback MKV3TransferSaveOpsForField
    char _pad_01F8[0x10]; // offset 0x1F8
};
