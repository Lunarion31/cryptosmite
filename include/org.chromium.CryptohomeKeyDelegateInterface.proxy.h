
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__include_org_chromium_CryptohomeKeyDelegateInterface_proxy_h__PROXY_MARSHAL_H
#define __dbusxx__include_org_chromium_CryptohomeKeyDelegateInterface_proxy_h__PROXY_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace chromium {

class CryptohomeKeyDelegateInterface_proxy
: public ::DBus::InterfaceProxy
{
public:

    CryptohomeKeyDelegateInterface_proxy()
    : ::DBus::InterfaceProxy("org.chromium.CryptohomeKeyDelegateInterface")
    {
    }

public:

    /* properties exported by this interface */
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    std::vector< uint8_t > ChallengeKey(const std::vector< uint8_t >& account_id, const std::vector< uint8_t >& challenge_request)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << account_id;
        wi << challenge_request;
        call.member("ChallengeKey");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::vector< uint8_t > argout;
        ri >> argout;
        return argout;
    }

    std::vector< uint8_t > FidoMakeCredential(const std::string& client_data_json, const std::vector< uint8_t >& fido_create_credential_request)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << client_data_json;
        wi << fido_create_credential_request;
        call.member("FidoMakeCredential");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::vector< uint8_t > argout;
        ri >> argout;
        return argout;
    }

    std::vector< uint8_t > FidoGetAssertion(const std::string& client_data_json, const std::vector< uint8_t >& fido_get_assertion_request)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << client_data_json;
        wi << fido_get_assertion_request;
        call.member("FidoGetAssertion");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::vector< uint8_t > argout;
        ri >> argout;
        return argout;
    }


public:

    /* signal handlers for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
};

} } 
#endif //__dbusxx__include_org_chromium_CryptohomeKeyDelegateInterface_proxy_h__PROXY_MARSHAL_H
