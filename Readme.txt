CS 101 SPRING PROJECT 

   2D GRAPH PLOTTER

SARVESH HIRE          14D070008(Group Leader)
CHIRANJIV SEN         14D070048
DEEPAK KUMAI BAIRWA   140040038

You can download code blocks for simple cpp from the site mentioned below:

http://www.cse.iitb.ac.in/~ranade/simplecpp/

After downloading the file, you have to install code blocks on your computer.
For running the code and using the graphplotter follow these instructions:
1.Build and compile the code in code blocks.
2.After the  program starts running you are provided with options to select graph plotter or equation solver.
3.If you press 1 graph plotter will be started.
4.Give the input range as some integer i for your graph plotter and your graph will be adjusted from (-i,i).
5.Click on the buttons for making your function and your gra[h is ready to be plotted.

Below given is the video link for how to install our project and run it:
https://www.youtube.com/watch?v=6QF-i40dGis




Absolutely — here’s the refined 1–2 page report with “Company ABC” substituted for Mastercard throughout, keeping the rest of the narrative, tone, and structure identical. This version reads like a consulting-style strategic memo you could send internally or use as a thought-leadership piece.

⸻

Agentic commerce changes the relationship between identity, consent and transaction execution.

In a traditional digital transaction, the customer is generally present when the purchase is initiated, authenticated and confirmed. In an agentic journey, the customer may provide an instruction at one point in time, while an AI agent searches, negotiates, selects a merchant and executes a transaction later. The journey may pause, resume or branch across multiple platforms, and the customer may be absent when the final action occurs.

This creates a missing link between three capabilities that are often handled separately today:

Customer identity
        ↓
Authority delegated to an agent
        ↓
Action and transaction completed by that agent
The industry can authenticate a customer, identify or risk-score an agent, and assess an individual transaction. However, it cannot always provide durable and independently verifiable evidence that a specific agent was authorized by a specific, KYC-backed customer, under a defined scope, and that the resulting action remained within that authority.

The proposed solution is a Customer–Agent Binding capability that establishes and maintains a persistent, privacy-preserving relationship between:

a KYC-backed customer;
a customer-controlled authenticator or cryptographic key;
a specifically identified agent and its cryptographic key;
the authority delegated to that agent;
and the actions and transactions performed under that authority.
The binding would be accompanied by a Binding Confidence insight for issuers. Cryptographic verification would determine whether the binding and delegation evidence are technically valid. The Binding Confidence model would determine how much trust should be placed in that relationship based on customer authentication, agent identity, device context, binding history, lifecycle events and other risk signals.

The proposed capability builds on Verifiable Intent rather than replacing it. Verifiable Intent provides a portable, tamper-evident delegation chain that binds a customer-authorized mandate to the agent key and subsequently binds the agent’s action to that mandate. It focuses on proving what the customer authorized and whether the agent remained within those constraints. 

The proposed solution extends that foundation by adding:

a KYC-backed customer anchor;
persistent customer–agent enrollment;
durable agent identity rather than key identity alone;
binding lifecycle and revocation;
authentication-assurance evidence;
dynamic Binding Confidence;
issuer-facing decision insights;
human-in-the-loop orchestration;
network-level monitoring and dispute evidence.
The intended outcome is not to expose the identity of the customer to every participant. It is to allow an issuer, merchant or other authorized relying party to verify that:

A known and appropriately authenticated customer authorized a specifically identified agent, the authority remains valid, and the current action can be reliably traced to that relationship.

2. Scope and objectives
2.1 Problem statement
Across agentic journeys, identity, consent and action may occur at different times and through different participants.

Agents may act while customers are intermittently present or fully absent. Journeys may pause, resume and branch across agents, merchants, payment providers and platforms. Authentication and behavioral risk signals may exist at individual points in the journey, but these signals do not necessarily create a durable record of delegated authority.

As a result:

behavior can be risk-scored, but authority cannot always be proven;
a customer can be authenticated at a moment in time, but the eventual transaction cannot always be traced back to the customer’s original intent;
the customer and agent can be identified independently, but their relationship cannot always be verified persistently;
a valid agentic transaction may be difficult to distinguish from an unauthorized agent acting with compromised credentials;
issuers may receive a transaction without sufficient context to determine whether the agent had legitimate customer authority;
merchants may be unable to determine whether an instruction originated from a customer-authorized agent;
disputes may lack a clear record of who authorized what, under which constraints, and when.
The central problem is therefore:

How can ecosystem participants verify that a specific agent is currently acting under valid authority from a known, KYC-backed customer, within an explicitly defined scope, while preserving customer privacy and supporting revocation, auditability, risk assessment and human intervention?

2.2 Why binding is required
Binding is the missing middle between identity verification and transaction execution.

A complete agentic transaction requires more than proof that the customer exists or proof that an agent signed a request. It requires a durable chain of evidence:

KYC-backed customer
        ↓
Strong customer authentication
        ↓
Specific registered agent
        ↓
Explicit delegated mandate
        ↓
Signed agent action
        ↓
Transaction and outcome
Without this chain, the ecosystem may know that:

the account belongs to a verified customer;
the request came from an identifiable agent;
the transaction appears behaviorally normal;
but still not know whether that customer actually authorized that agent to perform that action.

Binding should therefore answer four separate questions:

Customer assurance: Is there a verified customer behind the relationship?
Authentication assurance: How strongly was the customer authenticated when the relationship or mandate was established?
Agent-binding assurance: Which specific agent received the authority?
Execution assurance: Did that same agent perform the resulting action within the authorized scope?
2.3 Objectives
The objectives of the proposed capability are to:

Establish a durable customer–agent relationship
Create a persistent and independently verifiable record connecting a KYC-backed customer to a registered agent.

Preserve customer privacy
Allow relying parties to verify the existence and quality of the binding without requiring broad disclosure of the customer’s legal identity or underlying KYC data.

Support scoped delegation
Separate persistent agent enrollment from the specific authority granted for a task, transaction, period or spending limit.

Bind actions to delegated authority
Ensure that the agent executing an action is the same agent that received the authority and that the final action remains within the approved scope.

Provide issuer-facing risk intelligence
Generate a Binding Confidence insight that helps issuers determine how much trust to place in the relationship.

Enable proportionate human intervention
Trigger human-in-the-loop confirmation when the binding is weak, the mandate is ambiguous, the action falls outside the expected context or the level of risk exceeds an autonomous decision threshold.

Support lifecycle management
Allow bindings and mandates to be activated, renewed, suspended, revoked, expired and updated when keys, devices, accounts or agent identities change.

Create audit and dispute evidence
Maintain a reconstructable record of who authorized the agent, what was permitted, which agent acted and what outcome resulted.

2.4 What the proposed capability is intended to solve
The solution is intended to address the following questions:

Which KYC-backed customer is behind this agentic activity?
How was that customer authenticated?
Which specific agent did the customer authorize?
Is the agent identity registered and trusted?
What authority was granted to the agent?
Is the authority still active?
Did the agent remain within the approved constraints?
Does the final transaction correspond to the approved intent?
Has the binding or mandate been revoked or materially changed?
How much confidence should the issuer place in the relationship?
Should the action proceed autonomously, require customer confirmation or be declined?
Can the authorization chain be reconstructed during a dispute?
2.5 Out of scope for the initial phase
The initial solution should not attempt to:

replace issuer KYC processes;
replace existing payment authorization or fraud-scoring systems;
establish a universal legal identity for every software agent;
determine liability across all possible agentic commerce scenarios;
expose underlying customer PII to merchants by default;
infer customer authority solely from behavioral signals;
treat a valid cryptographic signature as sufficient evidence of low risk;
create one combined score that obscures binding, agent and transaction risks.
3. Core concepts and definitions
3.1 Customer–agent binding
A customer–agent binding is a durable record that establishes that a KYC-backed customer has authorized a specifically identified agent to act as their delegate.

A binding should contain or reference:

pseudonymous customer identifier;
identity-provider or issuer identifier;
customer key or authenticator reference;
agent registration identifier;
agent provider;
agent product or service;
agent-instance identifier, where relevant;
agent public-key reference;
authentication method and assurance;
creation timestamp;
expiration;
current status;
revocation information.
The binding should not itself represent unlimited transactional authority.

3.2 Delegated mandate
A mandate defines what the bound agent is permitted to do.

It may contain:

transaction purpose;
permitted merchants;
permitted products or categories;
maximum transaction amount;
cumulative budget;
valid dates;
frequency;
number of permitted actions;
geographic limitations;
shipping restrictions;
human-review thresholds;
sub-agent permissions;
recurring-purchase rules.
Verifiable Intent already defines machine-verifiable mandate constraints, including permitted merchants and payees, amount ranges, cumulative budgets and agent-managed recurring purchases. 

3.3 Transaction proof
The transaction proof connects the final agent action to:

the binding;
the mandate;
the agent key;
the merchant;
the payment request;
and the actual checkout outcome.
Verifiable Intent uses layered hash and signature binding to connect credentials and requires verifiers to resolve the agent key from the customer-authorized mandate rather than accepting a key self-declared in the final agent action. It also defines checkout-to-payment cross-references to reduce substitution and mismatch risk. 

3.4 Binding status
Binding status is deterministic:

Valid
Expired
Revoked
Suspended
Not yet active
Invalid
Indeterminate
It answers:

Is the binding currently recognized and technically usable?

3.5 Binding Confidence
Binding Confidence is probabilistic.

It answers:

How much confidence should be placed in the claim that this agent is acting under valid authority from this customer?

A binding may be technically valid but still carry low confidence because of suspicious enrollment context, recent account recovery, an unfamiliar agent or a sudden expansion in authority.

4. Relationship to Verifiable Intent
4.1 What Verifiable Intent provides
Verifiable Intent is an open, protocol-agnostic specification for cryptographic agent authorization in commerce. Its core purpose is to create a tamper-evident delegation chain connecting human-approved scope to an agent’s action. 

At a simplified level, its architecture can be understood as:

Layer 1
Issuer or trusted party → customer key

Layer 2
Customer key → agent key + authorized mandate

Layer 3
Agent key → final action and transaction
Verifiable Intent therefore addresses important elements of the binding problem:

it binds an issuer-recognized customer key to the credential chain;
it binds the delegated mandate to a specific agent key;
it verifies that the same agent key signs the resulting fulfillment;
it enables selective disclosure;
it defines machine-verifiable constraints;
it binds checkout and payment information;
it supports independent verification across protocols.
The specification is intentionally separate from transport protocols. Protocols may carry checkout and payment messages, while Verifiable Intent provides the authorization evidence that travels alongside them. 

4.2 Why Verifiable Intent does not fully solve the proposed problem
Verifiable Intent provides a strong cryptographic basis, but the proposed Customer–Agent Binding capability addresses several additional requirements.

A key is not necessarily the human
Verifiable Intent can demonstrate that the holder of a customer key signed a mandate. That alone does not establish whether the real customer was consciously present or strongly authenticated when the mandate was created.

Its security model recognizes the importance of secure key storage and the consequences of customer-key compromise. 

The proposed solution adds:

authentication method;
authentication assurance;
device context;
account-recovery context;
customer-session risk;
proof of customer presence where required.
An agent key is not necessarily a persistent agent identity
A public key identifies a key holder, but a network may also need to know:

the agent provider;
the agent product;
the software or model version;
the specific agent instance;
current and historical keys;
registration and certification status;
provider-level risk performance.
The proposed solution binds the cryptographic key to a durable agent identity and registration record.

Transaction delegation is not the same as persistent enrollment
Verifiable Intent is particularly strong at proving a mandate and its fulfillment.

The proposed solution introduces a separate, reusable customer–agent enrollment layer:

Persistent binding
“This customer recognizes this agent.”

Scoped mandate
“This agent may perform this task.”

Transaction proof
“This action was completed under that mandate.”
Verification is not the same as risk assessment
A credential chain may pass every signature and constraint check while still being suspicious.

The proposed solution therefore adds Binding Confidence and related reason codes.

Lifecycle and revocation require operational infrastructure
Bindings must respond to:

device compromise;
account takeover;
agent-provider compromise;
key rotation;
customer revocation;
account closure;
loss of agent registration;
material changes in authorization.
The Verifiable Intent specification notes that credential-layer revocation remains an area for further development in its draft security model. 

4.3 How the proposed solution builds on Verifiable Intent
The relationship can be summarized as:

Verifiable Intent
Provides cryptographic proof of delegated intent and fulfillment

Customer–Agent Binding Service
Creates a durable relationship between a KYC-backed customer
and a registered agent

Binding Confidence
Assesses whether that relationship should be trusted

Issuer decisioning
Determines whether to proceed, step up or decline
The proposed capability should therefore use Verifiable Intent where possible for:

layered signatures;
customer-key-to-agent-key delegation;
mandate constraints;
selective disclosure;
fulfillment verification;
checkout and payment binding.
The new capability would add:

KYC provenance;
persistent binding identity;
agent registration;
authentication evidence;
lifecycle management;
revocation;
dynamic scoring;
reason codes;
network monitoring;
HITL recommendations;
audit and dispute tooling.
5. Target use cases and ecosystem value
5.1 Issuer use cases
Issuers are likely to be the primary consumers of the Binding Confidence insight.

Authorization decisioning
The issuer can determine whether:

a recognized customer is behind the activity;
the customer authenticated strongly enough;
the agent is bound to the customer;
the mandate is valid;
the action remained within scope;
additional customer confirmation is required.
Illustrative issuer input:

Binding status: Valid
Binding Confidence: 84 – High
Customer authentication: Passkey on known device
Agent registration: Verified
Mandate compliance: Pass
Transaction risk: Medium
Recommended treatment: Proceed
Step-up authentication
The issuer can trigger step-up where:

the binding is new;
the customer authenticated weakly;
the device is unfamiliar;
the transaction value is high;
the mandate is broad;
the agent key changed unexpectedly;
the action falls near or beyond an approved threshold.
Account-takeover detection
A suspicious customer–agent binding may be an early indicator of account takeover.

Examples include:

an agent connected immediately after account recovery;
several agents connected in a short period;
enrollment from a new device or geography;
high-value authority granted immediately after binding;
an agent unfamiliar to the customer’s prior behavior.
Fraud-model enrichment
Binding status, confidence and reason codes can become inputs into existing issuer fraud models without replacing them.

Customer experience
Strong bindings can reduce unnecessary challenges for well-established customer–agent relationships, while riskier relationships receive proportionate intervention.

Dispute management
Issuers can reconstruct:

how the customer was authenticated;
which agent was authorized;
what scope was granted;
whether the action remained in scope;
whether HITL occurred;
whether the binding had been revoked.
5.2 Merchant use cases
Proof of customer authority
A merchant can verify that the agent is not merely claiming to represent a customer but possesses a valid mandate linked to a KYC-backed relationship.

Reduced unauthorized-agent risk
Merchants can reject or step up requests from:

unregistered agents;
agents with invalid bindings;
agents acting outside mandate scope;
revoked or expired agent identities.
Checkout integrity
The merchant can bind the final basket, amount and payment request to the authorized mandate, reducing the risk that the purchase changes between customer approval and execution.

Lower abandonment
A strong binding can allow low-risk agent purchases to complete without returning the customer to a full checkout flow.

Dispute evidence
The merchant can demonstrate that:

the agent presented valid authority;
the mandate covered the purchase;
the final basket matched the approved constraints.
5.3 Payment-network use cases
Network-level customer–agent binding service
The network can provide a shared trust layer connecting issuer-backed identity, agent registration, mandates and transaction evidence.

Cross-issuer and cross-merchant intelligence
A network can observe binding activity across participants, subject to privacy and data-use constraints, enabling stronger identification of suspicious patterns.

Stateful mandate enforcement
The network can enforce cumulative limits, occurrence counts and replay controls across transactions. Verifiable Intent explicitly assigns payment networks a role in tracking fulfillment use and cumulative spend for relevant mandates. 

Standards and interoperability
The network can provide a consistent interface for issuers, merchants, wallets and agent providers across different transport protocols.

Liability and evidence framework
The network can establish common evidence fields, verification rules and liability indicators.

5.4 Wallet and credential-provider use cases
Customer-controlled agent enrollment
Wallets can provide a trusted interface for the customer to connect, review and revoke agents.

Secure key management
Wallets can protect the customer signing key using secure hardware and local authentication.

Verifiable Intent’s design rationale describes FIDO2 or WebAuthn as complementary authentication mechanisms that can gate customer authorization, while remaining technically distinct from the Verifiable Intent signing key. 

Consent dashboard
Customers can view:

connected agents;
active mandates;
spending limits;
recent actions;
upcoming recurring actions;
revocation controls.
Step-up orchestration
Wallets can receive HITL requests and collect confirmation through biometrics or passkeys.

5.5 Agent-provider use cases
Agent registration and certification
Providers can register agent products, instances and keys.

Improved transaction acceptance
Registered agents with established binding histories may experience lower friction and higher issuer confidence.

Key rotation
Providers can rotate keys while preserving continuity of agent identity.

Reputation management
Providers can monitor:

binding success;
issuer step-up rates;
mandate violations;
disputes;
fraud outcomes;
revocation rates.
5.6 Merchant acquirer and payment-service-provider use cases
Merchant-facing verification
Acquirers and PSPs can expose binding verification to merchants that cannot independently integrate with every agent protocol.

Risk segmentation
Agentic traffic can be categorized based on:

binding validity;
agent registration;
mandate quality;
customer-authentication assurance.
Portfolio monitoring
Acquirers can identify merchants experiencing high levels of invalid or weakly bound agent traffic.

5.7 Customer use cases
Trusted delegation
Customers can permit agents to act without sharing unrestricted credentials.

Visibility and control
Customers can see which agents are connected and what each one is allowed to do.

Revocation
Customers can disconnect an agent or terminate a mandate at any time.

Reduced repeated authentication
A persistent high-confidence binding can support autonomy for lower-risk actions while retaining step-up for material decisions.

6. Proposed solution scope
6.1 Solution overview
The proposed solution consists of eight connected capabilities:

1. Customer Identity Assurance
2. Agent Identity Registry
3. Customer–Agent Binding Service
4. Mandate and Consent Service
5. Action and Transaction Proof Verification
6. Binding Confidence Engine
7. Lifecycle, Revocation and HITL Orchestration
8. Issuer, Merchant and Audit Insights
6.2 Customer Identity Assurance
This component anchors the binding to a KYC-backed customer.

It should support:

issuer- or identity-provider-issued customer reference;
pseudonymous network identifier;
customer-key association;
identity-assurance level;
credential validity;
identity-provider provenance;
privacy-preserving presentation.
Illustrative record:

{
  "customer_reference": "C-73921",
  "identity_provider": "Issuer-A",
  "identity_status": "verified",
  "identity_assurance": "high",
  "customer_key_id": "UK-482",
  "credential_expiry": "2027-07-20"
}
The issuer retains the mapping between the pseudonymous customer reference and the legal identity.

6.3 Agent Identity Registry
This registry establishes the durable identity behind an agent key.

It should maintain:

agent registration ID;
provider identity;
agent product name;
supported purposes;
agent-instance identifier;
public keys;
key history;
certificate or attestation status;
registration status;
risk and performance indicators;
compromise and suspension status.
Illustrative hierarchy:

Agent provider
    ↓
Agent product
    ↓
Agent version
    ↓
Agent instance
    ↓
Cryptographic keys
This prevents the ecosystem from treating each new key as an unrelated agent.

6.4 Customer–Agent Binding Service
This service creates the persistent relationship between the customer and agent.

Illustrative binding:

{
  "binding_id": "B-83762",
  "customer_reference": "C-73921",
  "customer_key_id": "UK-482",
  "agent_registration_id": "A-456",
  "agent_key_thumbprint": "AK-9021",
  "authentication_method": "passkey",
  "authentication_assurance": "high",
  "created_at": "2026-07-20T21:15:00Z",
  "expires_at": "2026-10-20T21:15:00Z",
  "status": "active"
}
The service should validate that:

the customer credential is valid;
the agent is registered;
the customer completed required authentication;
the customer clearly understood which agent was being connected;
the agent key belongs to the registered agent;
the binding has an expiration and revocation mechanism.
6.5 Mandate and Consent Service
This service records task-specific authority.

Illustrative mandate:

{
  "mandate_id": "M-10982",
  "binding_id": "B-83762",
  "purpose": "airline_booking",
  "agent_key_thumbprint": "AK-9021",
  "maximum_amount": 1200,
  "currency": "USD",
  "valid_until": "2026-07-25T23:59:59Z",
  "human_review_threshold": 1000
}
Mandates should support:

one-time transactions;
time-bound tasks;
recurring purchases;
cumulative budgets;
merchant and product restrictions;
dynamic human-review thresholds;
sub-agent restrictions;
amendment and revocation.
The mandate should be signed by the customer-controlled key and reference the persistent binding.

6.6 Action and Transaction Proof Verification
When the agent acts, it signs the action using the authorized agent key.

The proof should reference:

binding ID;
mandate ID;
agent identity;
agent key;
transaction ID;
checkout hash;
merchant;
amount;
timestamp;
fulfillment details.
The verifier should determine:

Is the KYC-backed customer credential valid?
Is the customer–agent binding active?
Does the mandate reference that binding?
Is the mandate valid and unrevoked?
Does the acting agent key match the authorized key?
Is the action within the mandate constraints?
Does the final transaction match the signed checkout?
Has the mandate already been consumed or exceeded?
Is human confirmation required?
6.7 Binding Confidence Engine
The Binding Confidence Engine assesses the trustworthiness of the relationship.

The score should remain separate from:

agent-risk score;
mandate-compliance result;
transaction-fraud score;
merchant-risk score.
Proposed output
{
  "binding_id": "B-83762",
  "binding_status": "valid",
  "binding_confidence": 82,
  "confidence_band": "high",
  "recommended_treatment": "proceed",
  "reason_codes": [
    "STRONG_CUSTOMER_AUTHENTICATION",
    "KNOWN_CUSTOMER_DEVICE",
    "REGISTERED_AGENT",
    "ESTABLISHED_BINDING_HISTORY",
    "MANDATE_SCOPE_CONSISTENT"
  ],
  "evaluated_at": "2026-07-20T23:10:00Z"
}
Score dimensions
Customer identity assurance
Signals may include:

KYC status;
age of customer relationship;
account standing;
recent changes to identity information;
recent account recovery;
credential-compromise indicators.
Authentication assurance
Signals may include:

phishing-resistant passkey;
issuer-app authentication;
biometric-backed authentication;
known device;
new-device enrollment;
password-only authentication;
SMS authentication after SIM change;
risk of the authentication session.
Agent identity assurance
Signals may include:

agent registration status;
provider verification;
key provenance;
agent attestation;
key rotation history;
provider compromise indicators;
agent dispute and fraud performance.
Binding relationship history
Signals may include:

age of binding;
number of successful prior actions;
historical mandate compliance;
customer-confirmation rate;
prior revocation;
repeated bind-and-unbind behavior;
dispute history.
Binding-creation context
Signals may include:

customer-initiated versus agent-initiated enrollment;
known versus unfamiliar device;
normal versus unusual geography;
recent account recovery;
high-risk redirect or consent flow;
multiple rapid agent enrollments.
Mandate and privilege risk
Signals may include:

breadth of authority;
monetary ceiling;
duration;
permitted merchant range;
sensitive product access;
sub-agent permissions;
ability to alter payment or shipping details;
recurrence;
human-review thresholds.
Lifecycle health
Signals may include:

credential age;
time since last customer authentication;
binding dormancy;
key rotation;
device loss;
agent-provider status;
customer-account restrictions;
revocation or suspension events.
Score interpretation
Illustrative bands:

Binding Confidence

Interpretation

Indicative treatment

80–100

Strong relationship evidence

Proceed, subject to transaction risk

60–79

Acceptable but with uncertainty

Proceed selectively or monitor

40–59

Material uncertainty

Step-up recommended

0–39

Weak or suspicious binding

Strong step-up or decline

Invalid/revoked

No valid authority

Decline

These thresholds should be calibrated rather than treated as fixed universal standards.

Reason codes
Reason codes are essential because issuers need to understand the score and incorporate it into their own decision strategies.

Potential reason codes include:

STRONG_CUSTOMER_AUTHENTICATION
WEAK_CUSTOMER_AUTHENTICATION
KNOWN_CUSTOMER_DEVICE
NEW_DEVICE_AT_BINDING
RECENT_ACCOUNT_RECOVERY
REGISTERED_AGENT
UNREGISTERED_AGENT
AGENT_KEY_ROTATION_VERIFIED
AGENT_KEY_MISMATCH
NEW_CUSTOMER_AGENT_RELATIONSHIP
ESTABLISHED_BINDING_HISTORY
BROAD_MANDATE_SCOPE
HIGH_VALUE_AUTHORITY
MANDATE_OUTSIDE_NORMAL_BEHAVIOR
BINDING_RECENTLY_REACTIVATED
BINDING_REVOKED
6.8 HITL and decision orchestration
HITL should be an evidence-based policy outcome.

Binding verification
        +
Binding Confidence
        +
Mandate compliance
        +
Agent risk
        +
Transaction risk
        ↓
Proceed / Monitor / Step up / Decline
HITL may be triggered when:

no valid binding exists;
the binding is low-confidence;
the agent is new or unregistered;
the customer authentication is weak;
the mandate is broad or ambiguous;
the action exceeds the approved scope;
the final amount crosses a threshold;
the product or service is regulated;
the agent key has changed unexpectedly;
sub-agent delegation occurs;
the transaction risk is elevated;
the merchant differs materially from the approved context.
HITL responses may include:

simple customer confirmation;
issuer-app approval;
biometric step-up;
revised mandate approval;
full transaction authentication;
mandate suspension;
decline.
6.9 Lifecycle and revocation
The binding and mandate must support:

Creation
Activation
Use
Renewal
Amendment
Suspension
Key rotation
Revocation
Expiration
Termination
Revocation may be initiated by:

customer;
issuer;
network;
wallet;
agent provider;
merchant in specific contexts;
automated fraud or compromise detection.
Revocation signals should propagate quickly enough to prevent continued use of stale authority.

6.10 Issuer insight package
The issuer should receive a modular set of signals rather than one opaque score:

Agentic transaction indicator
Customer–agent binding ID
Binding status
Binding Confidence
Customer-authentication assurance
Agent registration status
Mandate validity
Mandate-compliance result
Agent-risk insight
Transaction-risk insight
HITL recommendation
Reason codes
Illustrative result:

Binding status: Valid
Binding Confidence: 76 – Medium
Customer authentication: Strong
Agent registration: Verified
Relationship age: New
Mandate compliance: Pass
Transaction risk: Low
Recommendation: Proceed below $250; step up above $250
7. Illustrative end-to-end journey
7.1 Agent enrollment
The customer opens an issuer or wallet application and selects:

Connect AgentCo Shopping Agent

The customer is authenticated using a passkey on a recognized device.

The issuer or binding service creates:

Customer C1
    ↕
Agent A1
    ↕
Agent key K1

Binding ID B1
7.2 Mandate creation
The customer tells the agent:

Buy noise-cancelling headphones for no more than $400 before Friday.

The mandate contains:

Binding: B1
Agent key: K1
Purpose: Headphones purchase
Maximum amount: $400
Expiry: Friday
Human review threshold: $375
7.3 Agent action
The agent finds a product for $349 and signs the final checkout using K1.

7.4 Network verification
The network verifies:

KYC-backed customer credential        Pass
Customer–agent binding                Active
Agent key                              Match
Mandate                                Valid
Amount                                 In scope
Merchant and category                  In scope
Checkout-to-payment binding            Match
Binding Confidence                     High
Transaction risk                       Low
The transaction proceeds without customer interruption.

7.5 HITL scenario
If the final price is $425:

Mandate amount exceeded
        ↓
HITL request
        ↓
Customer reviews revised purchase
        ↓
Customer authorizes amended mandate or declines
7.6 Suspicious-binding scenario
Suppose the cryptographic binding is valid, but it was:

created five minutes earlier;
created after account recovery;
created on a new device;
associated with an unfamiliar agent;
followed by a $5,000 mandate.
The issuer might receive:

Binding status: Valid
Binding Confidence: 24 – Low
Reason codes:
RECENT_ACCOUNT_RECOVERY
NEW_DEVICE_AT_BINDING
NEW_CUSTOMER_AGENT_RELATIONSHIP
HIGH_VALUE_AUTHORITY

Recommendation: Strong customer step-up
This demonstrates why cryptographic verification and Binding Confidence must remain separate.

8. Assumptions
The initial scope is based on the following assumptions.

Identity and authentication assumptions
A regulated issuer, financial institution, wallet or approved identity provider has already performed appropriate customer identity verification.
The binding service receives a pseudonymous customer reference rather than the complete KYC record.
The customer possesses a secure authenticator or signing capability.
Strong customer authentication can be invoked when required.
Customer-key compromise cannot be eliminated and must be addressed through risk signals and lifecycle controls.
Agent assumptions
Agent providers can register agent identities and public keys.
A durable agent identity can persist across key rotation.
Agent-provider identity and agent-instance identity may have different levels of assurance.
Not every agent will initially support hardware attestation.
Sub-agent delegation will require explicit representation and controls.
Ecosystem assumptions
Issuers will remain responsible for final payment-authorization decisions.
Merchants and PSPs will not all implement the same agentic protocol.
The solution must therefore remain protocol-agnostic.
Existing fraud and transaction-risk systems will continue to operate.
Binding signals will supplement rather than replace those systems.
Participants will require reason codes and evidence, not only a numeric score.
Privacy assumptions
The merchant does not ordinarily need the customer’s full legal identity.
The issuer or identity provider retains the mapping from customer reference to legal identity.
Selective disclosure and data minimization are core design principles.
Cross-participant data use will require defined governance, retention and purpose limitations.
Operational assumptions
Bindings and mandates must be revocable.
Binding Confidence must be recalculated when material events occur.
Some decisions must operate in real time at authorization.
Other monitoring and lifecycle updates may occur asynchronously.
The first phase may rely on deterministic rules before sufficient labels exist for model-based scoring.
9. Hypotheses to validate
9.1 Customer–agent binding hypothesis
Hypothesis: A persistent customer–agent binding provides greater authorization assurance than transaction-level agent indicators alone.

Measure through:

issuer decision confidence;
reduction in indeterminate agentic transactions;
ability to identify unauthorized agent activity;
dispute reconstruction quality.
9.2 Binding Confidence hypothesis
Hypothesis: A Binding Confidence insight adds predictive value beyond cryptographic validity, agent identity and existing transaction-risk scores.

Measure through:

fraud lift;
account-takeover detection;
step-up precision;
false-positive reduction;
incremental model performance.
9.3 Reason-code hypothesis
Hypothesis: Issuers will derive more actionable value from binding status, confidence and reason codes than from a standalone score.

Measure through:

issuer adoption;
strategy-rule usage;
analyst understanding;
decision consistency;
explainability feedback.
9.4 Persistent-binding hypothesis
Hypothesis: Separating persistent enrollment from scoped mandates supports lower friction without granting excessive standing authority.

Measure through:

authentication frequency;
customer abandonment;
successful autonomous completion;
unauthorized-use rates;
mandate-revocation behavior.
9.5 HITL hypothesis
Hypothesis: Risk-triggered HITL provides a better balance of autonomy and control than either requiring confirmation for every transaction or allowing unrestricted agent action.

Measure through:

challenge rate;
challenge success;
customer rejection rate;
fraud prevented;
autonomous completion rate.
9.6 Network-value hypothesis
Hypothesis: A network-level service creates more value than bilateral issuer–agent integrations by providing interoperability, consistent evidence and broader risk visibility.

Measure through:

issuer integration effort;
agent-provider coverage;
merchant acceptance;
cross-participant fraud detection;
time to onboard new ecosystem participants.
9.7 Verifiable Intent extension hypothesis
Hypothesis: Verifiable Intent can provide the core mandate and fulfillment proof, while a network service adds sufficient value through KYC anchoring, persistent binding and risk intelligence.

Measure through:

technical interoperability;
coverage of required use cases;
gaps requiring extensions;
issuer and merchant acceptance of the evidence chain.
10. Proposed MVP
The first MVP should focus on a narrow and testable flow.

MVP use case
One KYC-backed customer connects one registered shopping agent and authorizes a one-time ecommerce purchase under a defined amount.

MVP capabilities
Customer binding
issuer-backed customer reference;
strong customer authentication;
customer key association;
agent registration ID;
agent key association;
binding ID;
expiration and revocation.
Mandate
one-time use;
maximum amount;
currency;
merchant or category restriction;
validity window;
HITL threshold.
Verification
binding validity;
customer-key signature;
agent-key signature;
mandate compliance;
checkout-payment match;
replay prevention.
Binding Confidence v1
A rules-based score using:

authentication strength;
known device;
account-recovery status;
agent registration;
binding age;
prior customer–agent activity;
mandate value;
mandate breadth;
key consistency;
revocation status.
Issuer output
binding status;
confidence band;
reason codes;
mandate-compliance result;
recommended action.
HITL
issuer-app confirmation;
approve;
reject;
authorize amended mandate.
MVP success criteria
ability to trace a transaction to a KYC-backed customer;
successful proof that the executing agent matches the delegated agent;
successful enforcement of amount and merchant constraints;
successful rejection of altered, replayed, revoked or mismatched evidence;
issuer ability to consume and act on binding insights;
measurable incremental value of binding risk signals.
11. Key design questions
The following questions should be resolved during discovery and technical design.

Identity
Who issues the KYC-backed customer credential?
Is the customer identifier issuer-specific or network-level?
How is customer privacy preserved across merchants?
How is customer-account portability handled?
Agent identity
What constitutes an agent: provider, product, instance or execution environment?
Which agent level should be bound to the customer?
How are agent keys registered and rotated?
How are sub-agents represented?
What minimum evidence is required for agent registration?
Consent and mandate
Where does the customer create the binding?
What information must be shown during consent?
Which mandates require strong step-up?
How should ambiguous natural-language instructions be converted into machine-verifiable constraints?
Who is responsible for confirming the accuracy of that conversion?
Risk
Should the issuer receive confidence or risk as the primary orientation?
Which score components are deterministic?
Which require a statistical model?
How will the score be calibrated?
What labels will be used?
How will model drift be detected?
How will reason codes be standardized?
Operations
Where is binding state stored?
What latency is acceptable?
How quickly must revocation propagate?
How are offline or delayed actions handled?
How are recurring mandates monitored?
What happens when the agent provider is unavailable?
Liability and governance
Who is responsible when customer authentication is compromised?
Who is responsible when an agent exceeds the mandate?
Who is responsible when the merchant alters the checkout?
Which evidence is authoritative during a dispute?
What data may be shared across participants?
How long should binding evidence be retained?
12. Next steps
12.1 Align on the problem definition
Confirm that the primary product problem is:

Establishing and assessing a durable relationship between a KYC-backed customer and a specifically identified agent.

This should remain distinct from general agent identification and transaction-fraud detection.

12.2 Define the trust model
Document:

trusted parties;
trust boundaries;
credential issuers;
verifiers;
agent registrars;
revocation authorities;
evidence owners;
liability boundaries.
12.3 Map Verifiable Intent to the target architecture
Conduct a field-level mapping of:

customer credential;
customer key;
agent key;
mandate;
constraints;
fulfillment;
checkout binding;
payment binding.
Identify which elements can be adopted unchanged and which require a network extension.

12.4 Define the canonical binding object
Create a minimum data model for:

customer reference;
agent identity;
customer key;
agent key;
authentication context;
status;
timestamps;
expiry;
revocation;
lifecycle events.
12.5 Define the Binding Confidence framework
Begin with a transparent rules-based framework.

Define:

score dimensions;
feature availability;
confidence bands;
reason codes;
issuer recommendations;
handling of missing signals;
recalculation triggers.
Avoid moving immediately to a black-box model before data labels and issuer use cases are established.

12.6 Select a pilot use case
A low- to medium-value ecommerce purchase is a practical initial use case because:

the journey is understandable;
mandate constraints can be clearly defined;
HITL can be implemented;
outcome labels are available;
risk can be bounded.
12.7 Identify pilot participants
Potential pilot participants include:

one or more issuers;
a wallet or credential provider;
an agent provider;
a merchant or PSP;
network authorization and fraud teams;
identity, privacy, legal and dispute stakeholders.
12.8 Develop the technical proof of concept
The proof of concept should demonstrate:

Customer authentication
        ↓
Agent enrollment
        ↓
Binding credential creation
        ↓
Mandate creation
        ↓
Agent-signed checkout
        ↓
Binding and mandate verification
        ↓
Binding Confidence generation
        ↓
Issuer decision or HITL
12.9 Design test scenarios
Test both valid and adversarial cases:

established binding and valid mandate;
new binding;
customer key mismatch;
agent key mismatch;
expired binding;
revoked binding;
changed checkout;
replayed transaction;
mandate-limit breach;
new device after account recovery;
unregistered agent;
agent key rotation;
sub-agent use;
multiple recurring transactions.
12.10 Establish measurement and feedback
Collect:

binding-verification outcomes;
issuer actions;
HITL outcomes;
customer approvals and rejections;
fraud outcomes;
disputes;
false positives;
agent and merchant performance;
customer-friction metrics.
Use this data to determine whether Binding Confidence should evolve from rules into a calibrated statistical model.

13. Proposed positioning
Capability statement
A privacy-preserving network capability that links a KYC-backed customer to a registered agent, verifies the scope and continuity of that authority, and provides issuers with a risk-based assessment of how much confidence to place in the relationship.

Issuer value proposition
Understand not only that a transaction is agentic, but whether the agent can be reliably traced to an authenticated customer and whether that relationship should be trusted.

Merchant value proposition
Verify that an agent possesses valid customer authority and that the resulting purchase remains within the approved scope.

Customer value proposition
Delegate tasks to agents with clear limits, persistent control, visibility and revocation—without repeatedly exposing credentials or approving every low-risk action.

Relationship to Verifiable Intent
Verifiable Intent proves what the customer authorized and whether the agent acted within those bounds. The Customer–Agent Binding capability anchors that proof to a KYC-backed relationship, maintains it over time and evaluates whether the relationship should be trusted.

The central proposition is:

Cryptographic verification
tells the ecosystem whether the delegation is valid.

Customer–Agent Binding
tells the ecosystem which verified customer and registered agent
the delegation connects.

Binding Confidence
tells the issuer how much trust to place in that connection.
