
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__include_org_chromium_CryptohomeKeyDelegateInterface_adapter_h__ADAPTOR_MARSHAL_H
#define __dbusxx__include_org_chromium_CryptohomeKeyDelegateInterface_adapter_h__ADAPTOR_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace chromium {

class CryptohomeKeyDelegateInterface_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    CryptohomeKeyDelegateInterface_adaptor()
    : ::DBus::InterfaceAdaptor("org.chromium.CryptohomeKeyDelegateInterface")
    {
        register_method(CryptohomeKeyDelegateInterface_adaptor, ChallengeKey, _ChallengeKey_stub);
        register_method(CryptohomeKeyDelegateInterface_adaptor, FidoMakeCredential, _FidoMakeCredential_stub);
        register_method(CryptohomeKeyDelegateInterface_adaptor, FidoGetAssertion, _FidoGetAssertion_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument ChallengeKey_args[] = 
        {
            { "account_id", "ay", true },
            { "challenge_request", "ay", true },
            { "challenge_response", "ay", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument FidoMakeCredential_args[] = 
        {
            { "client_data_json", "s", true },
            { "fido_create_credential_request", "ay", true },
            { "fido_create_credential_response", "ay", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument FidoGetAssertion_args[] = 
        {
            { "client_data_json", "s", true },
            { "fido_get_assertion_request", "ay", true },
            { "fido_get_assertion_response", "ay", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod CryptohomeKeyDelegateInterface_adaptor_methods[] = 
        {
            { "ChallengeKey", ChallengeKey_args },
            { "FidoMakeCredential", FidoMakeCredential_args },
            { "FidoGetAssertion", FidoGetAssertion_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod CryptohomeKeyDelegateInterface_adaptor_signals[] = 
        {
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty CryptohomeKeyDelegateInterface_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface CryptohomeKeyDelegateInterface_adaptor_interface = 
        {
            "org.chromium.CryptohomeKeyDelegateInterface",
            CryptohomeKeyDelegateInterface_adaptor_methods,
            CryptohomeKeyDelegateInterface_adaptor_signals,
            CryptohomeKeyDelegateInterface_adaptor_properties
        };
        return &CryptohomeKeyDelegateInterface_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual std::vector< uint8_t > ChallengeKey(const std::vector< uint8_t >& account_id, const std::vector< uint8_t >& challenge_request) = 0;
    virtual std::vector< uint8_t > FidoMakeCredential(const std::string& client_data_json, const std::vector< uint8_t >& fido_create_credential_request) = 0;
    virtual std::vector< uint8_t > FidoGetAssertion(const std::string& client_data_json, const std::vector< uint8_t >& fido_get_assertion_request) = 0;

public:

    /* signal emitters for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _ChallengeKey_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::vector< uint8_t > argin1; ri >> argin1;
        std::vector< uint8_t > argin2; ri >> argin2;
        std::vector< uint8_t > argout1 = ChallengeKey(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _FidoMakeCredential_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::vector< uint8_t > argin2; ri >> argin2;
        std::vector< uint8_t > argout1 = FidoMakeCredential(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _FidoGetAssertion_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::vector< uint8_t > argin2; ri >> argin2;
        std::vector< uint8_t > argout1 = FidoGetAssertion(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } 
#endif //__dbusxx__include_org_chromium_CryptohomeKeyDelegateInterface_adapter_h__ADAPTOR_MARSHAL_H